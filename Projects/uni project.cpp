#include <iostream>
#include <fstream>

using namespace std;

// Define the Contact class
class Contact {
private:
    string name;
    string phoneNumber;
    string address;
    string email;

public:
    // Constructor
    Contact(string name, string phoneNumber, string address, string email) 
        : name(name), phoneNumber(phoneNumber), address(address), email(email) {}

    // Getters and setters
    string getName() { return name; }
    string getPhoneNumber() { return phoneNumber; }
    string getAddress() { return address; }
    string getEmail() { return email; }

    void setName(string newName) { name = newName; }
    void setPhoneNumber(string newPhoneNumber) { phoneNumber = newPhoneNumber; }
    void setAddress(string newAddress) { address = newAddress; }
    void setEmail(string newEmail) { email = newEmail; }
};

// Define the FileManager class
class FileManager {
public:
    // Read contacts from file
    static void ReadFromFile(Contact contacts[], int& count) {
        ifstream file("contacts.txt");
        string name, phoneNumber, address, email;

        count = 0;
        while (file >> name >> phoneNumber >> address >> email) {
            contacts[count++] = Contact(name, phoneNumber, address, email);
        }

        file.close();
    }

    // Write contacts to file
    static void WriteToFile(Contact contacts[], int count) {
        ofstream file("contacts.txt");
        for (int i = 0; i < count; ++i) {
            file << contacts[i].getName() << " " << contacts[i].getPhoneNumber() << " "
                 << contacts[i].getAddress() << " " << contacts[i].getEmail() << endl;
        }
        file.close();
    }
};

// Define the ContactManager class
class ContactManager {
public:
    // Add a new contact
    static void AddContact(Contact contacts[], int& count, Contact newContact) {
        contacts[count++] = newContact;
        FileManager::WriteToFile(contacts, count);
    }

    // List all contacts
    static void ListContacts(Contact contacts[], int count) {
        cout << "List of Contacts:" << endl;
        for (int i = 0; i < count; ++i) {
            cout << "Name: " << contacts[i].getName() << ", Phone: " << contacts[i].getPhoneNumber()
                 << ", Address: " << contacts[i].getAddress() << ", Email: " << contacts[i].getEmail() << endl;
        }
    }

    // Search contacts by name
    static void SearchContactsByName(Contact contacts[], int count, string name) {
        cout << "Search Results for Name: " << name << endl;
        for (int i = 0; i < count; ++i) {
            if (contacts[i].getName() == name) {
                cout << "Name: " << contacts[i].getName() << ", Phone: " << contacts[i].getPhoneNumber()
                     << ", Address: " << contacts[i].getAddress() << ", Email: " << contacts[i].getEmail() << endl;
            }
        }
    }

    // Search contacts by phone number
    static void SearchContactsByPhoneNumber(Contact contacts[], int count, string phoneNumber) {
        cout << "Search Results for Phone Number: " << phoneNumber << endl;
        for (int i = 0; i < count; ++i) {
            if (contacts[i].getPhoneNumber() == phoneNumber) {
                cout << "Name: " << contacts[i].getName() << ", Phone: " << contacts[i].getPhoneNumber()
                     << ", Address: " << contacts[i].getAddress() << ", Email: " << contacts[i].getEmail() << endl;
            }
        }
    }

    // Edit contact
    static void EditContact(Contact contacts[], int count, string name) {
        for (int i = 0; i < count; ++i) {
            if (contacts[i].getName() == name) {
                cout << "Enter new name: ";
                string newName;
                cin >> newName;
                cout << "Enter new phone number: ";
                string newPhoneNumber;
                cin >> newPhoneNumber;
                cout << "Enter new address: ";
                string newAddress;
                cin >> newAddress;
                cout << "Enter new email: ";
                string newEmail;
                cin >> newEmail;

                contacts[i].setName(newName);
                contacts[i].setPhoneNumber(newPhoneNumber);
                contacts[i].setAddress(newAddress);
                contacts[i].setEmail(newEmail);

                FileManager::WriteToFile(contacts, count);
                cout << "Contact updated successfully." << endl;
                return;
            }
        }
        cout << "Contact not found." << endl;
    }

    // Delete contact
    static void DeleteContact(Contact contacts[], int& count, string name) {
        for (int i = 0; i < count; ++i) {
            if (contacts[i].getName() == name) {
                for (int j = i; j < count - 1; ++j) {
                    contacts[j] = contacts[j + 1];
                }
                count--;
                FileManager::WriteToFile(contacts, count);
                cout << "Contact deleted successfully." << endl;
                return;
            }
        }
        cout << "Contact not found." << endl;
    }
};

// Define the UserInterface class
class UserInterface {
public:
    // Display menu
    static void DisplayMenu() {
        cout << "Contact Management System Menu:" << endl;
        cout << "1. Add Contact" << endl;
        cout << "2. List Contacts" << endl;
        cout << "3. Search Contacts by Name" << endl;
        cout << "4. Search Contacts by Phone Number" << endl;
        cout << "5. Edit Contact" << endl;
        cout << "6. Delete Contact" << endl;
        cout << "7. Exit" << endl;
    }

    // Get user input
    static int GetUserInput() {
        int choice;
        cout << "Enter your choice: ";
        cin >> choice;
        return choice;
    }
};

int main() {
    const int MAX_CONTACTS = 100; // Maximum number of contacts
    Contact contacts[MAX_CONTACTS];
    int count = 0; // Current number of contacts

    FileManager::ReadFromFile(contacts, count);

    while (true) {
        UserInterface::DisplayMenu();
        int choice = UserInterface::GetUserInput();

        switch (choice) {
            case 1: {
                string name, phoneNumber, address, email;
                cout << "Enter name: ";
                cin >> name;
                cout << "Enter phone number: ";
                cin >> phoneNumber;
                cout << "Enter address: ";
                cin >> address;
                cout << "Enter email: ";
                cin >> email;
                Contact newContact(name, phoneNumber, address, email);
                ContactManager::AddContact(contacts, count, newContact);
                break;
            }
            case 2:
                ContactManager::ListContacts(contacts, count);
                break;
            case 3: {
                string name;
                cout << "Enter name to search: ";
                cin >> name;
                ContactManager::SearchContactsByName(contacts, count, name);
                break;
            }
            case 4: {
                string phoneNumber;
                cout << "Enter phone number to search: ";
                cin >> phoneNumber;
                ContactManager::SearchContactsByPhoneNumber(contacts, count, phoneNumber);
                break;
            }
            case 5: {
                string name;
                cout << "Enter name of contact to edit: ";
                cin >> name;
                ContactManager::EditContact(contacts, count, name);
                break;
            }
            case 6: {
                string name;
                cout << "Enter name of contact to delete: ";
                cin >> name;
                ContactManager::DeleteContact(contacts, count, name);
                break;
            }
            case 7:
                FileManager::WriteToFile(contacts, count);
                cout << "Exiting program. Goodbye!" << endl;
                return 0;
            default:
                cout << "Invalid choice. Please try again." << endl;
        }
    }

    return 0;
}