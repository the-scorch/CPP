#include <iostream>
#include <ctime>
using namespace std;

int main()
{
	// Timestamp
	time_t current = time(NULL); // Current stamp

	cout << "Current Time: " << ctime(&current) << "\n"; // Display date from timestamp

	// Datetime structures
	struct tm bday;

	bday.tm_year = 105;
	bday.tm_mon = 2;
	bday.tm_mday = 21;
	bday.tm_hour = 14;
	bday.tm_min = 35;
	bday.tm_sec = 49;

	// Daylight Savings must be specified
	bday.tm_isdst = -1; // Computer's timezone

	mktime(&bday); // Converts & corrects datetime structure into timestamp for show

	string weekdays[] = {"Sunday", "Monday", "Tuesday", "Wednesday", "Thursday", "Friday", "Saturday"};

	cout << "My B'day: " << asctime(&bday) << weekdays[bday.tm_wday] << "\n\n"; // asctime() - Display date from datetime structure

	struct tm bday1;

	bday1.tm_year = 108;
	bday1.tm_mon = 9;
	bday1.tm_mday = 4;
	bday1.tm_hour = 0;
	bday1.tm_min = 0;
	bday1.tm_sec = 0;
	bday1.tm_isdst = -1;

	mktime(&bday1);

	cout << "Bro B'day: " << asctime(&bday1) << weekdays[bday1.tm_wday] << "\n\n";

	// Timestamp ~~ Datetime structure
	time_t current1 = time(NULL);
	struct tm event1 = *localtime(&current1); // for Computer's timezone

	// gmtime() for GMT time zone
	cout << event1.tm_year << "\n\n";

	// For desired Date Format
	time_t current2 = time(NULL);
	struct tm event2 = *localtime(&current2);

	char date[100];

	strftime(date, 100, "%d %B, %A", &event2);
	cout << date << "\n";

	strftime(date, 100, "%e %b, %a", &event2);
	cout << date << "\n";

	strftime(date, 100, "%H %M %S hours, %Y", &event2);
	cout << date << "\n";

	strftime(date, 100, "%I:%M %p, %y", &event2);
	cout << date << "\n\n";

	// Measuring Time between - difftime()
	time_t now = time(NULL);
	time_t newyear;
	struct tm event3;

	event3 = *localtime(&now);

	event3.tm_year = event3.tm_year + 1;
	event3.tm_mon = 0;
	event3.tm_mday = 1;
	event3.tm_hour = 0;
	event3.tm_min = 0;
	event3.tm_sec = 0;
	event3.tm_isdst = -1;

	newyear = mktime(&event3);

	int until = difftime(newyear, now);

	cout << "New Year: " << until << " seconds left!\n\n";

	time_t now1 = time(NULL);
	time_t incident;
	struct tm event4;

	event4 = *localtime(&now1);

	event4.tm_year = 161;
	event4.tm_mon = 6;
	event4.tm_mday = 28;
	event4.tm_hour = 0;
	event3.tm_min = 0;
	event4.tm_sec = 0;
	event4.tm_isdst = -1;

	incident = mktime(&event4);

	int until1 = difftime(incident, now1);

	cout << "Halley's Comet: " << until1 << " seconds left!\n\n";

	time_t now2 = time(NULL);
	time_t incident1;
	struct tm event5;

	event5 = *localtime(&now2);

	event5.tm_year = 124;
	event5.tm_mon = 6;
	event5.tm_mday = 25;
	event5.tm_hour = 3;
	event3.tm_min = 3;
	event5.tm_sec = 39;
	event5.tm_isdst = -1;

	incident1 = mktime(&event5);

	int until2 = difftime(incident1, now2);

	cout << "From Right Now: " << until2 << " seconds later..\n\n";

	// clock()
	clock_t before = clock();

	int a = 0;
	for (int i = 0; i < 100000; i++)
	{
		a += i;
	};

	clock_t duration = clock() - before;

	cout << "Duration: " << duration / CLOCKS_PER_SEC << " seconds\n\n";

	return 0;
}