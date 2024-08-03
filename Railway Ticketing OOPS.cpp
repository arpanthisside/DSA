#include <iostream>
#include <string>

using namespace std;

class Passenger {
protected:
    string name;
    int age;
    string source;
    string destination;

public:
    void setPassengerDetails() {
        cout << "Enter Passenger Name: ";
        getline(cin, name);
        cout << "Enter Passenger Age: ";
        cin >> age;
        cin.ignore();  // to ignore newline character left in the buffer
        cout << "Enter Source Station: ";
        getline(cin, source);
        cout << "Enter Destination Station: ";
        getline(cin, destination);
    }

    void displayPassengerDetails() {
        cout << "Passenger Name: " << name << endl;
        cout << "Passenger Age: " << age << endl;
        cout << "Source Station: " << source << endl;
        cout << "Destination Station: " << destination << endl;
    }
};

class Ticket {
protected:
    int trainNumber;
    string dateOfJourney;

public:
    void setTicketDetails() {
        cout << "Enter Train Number: ";
        cin >> trainNumber;
        cin.ignore();  // to ignore newline character left in the buffer
        cout << "Enter Date of Journey (DD/MM/YYYY): ";
        getline(cin, dateOfJourney);
    }

    void displayTicketDetails() {
        cout << "Train Number: " << trainNumber << endl;
        cout << "Date of Journey: " << dateOfJourney << endl;
    }
};

class Reservation : public Passenger, public Ticket {
public:
    void bookTicket() {
        cout << "Booking Ticket..." << endl;
        setPassengerDetails();
        setTicketDetails();
        cout << "Ticket Booked Successfully!" << endl;
    }

    void displayReservationDetails() {
        cout << "Reservation Details:" << endl;
        displayPassengerDetails();
        displayTicketDetails();
    }
};

int main() {
    Reservation reservation;
    reservation.bookTicket();
    cout << endl;
    reservation.displayReservationDetails();

    return 0;
}
