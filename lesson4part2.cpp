#include <iostream>

using namespace std;

int main()
{
    // Declare variables
    long long int days, hours, minutes, seconds;

    // Display prompt and obtain user input
    cout << "Enter seconds" << endl;
    cin >> seconds;
    cout << "Total seconds: " << seconds << endl;

    cout << endl;

    if (seconds <= 0)
        cout << "Total seconds must be greater than zero" << endl;
    else
    {
        // Calculations
        days = seconds / 3600 / 24;
        if (days > 0)
        {
            cout << days << " day(s)" << endl;
            hours = (seconds % (days * 24 * 3600)) / 3600;

            if (hours > 0)
            {
                cout << hours << " hour(s)" << endl;
                minutes = (seconds % (hours * 3600 + days * 24 * 3600)) / 60;

                if (minutes > 0)
                {
                    cout << minutes << " minute(s)" << endl;
                    seconds = seconds % (minutes * 60 + hours * 3600 + days * 3600 * 24);

                    if (seconds > 0)
                        cout << seconds << " second(s)" << endl;
                }
                else
                {
                    seconds = (seconds % (hours * 3600));

                    if (seconds > 0)
                        cout << seconds << " second(s)" << endl;
                }

            }
            else
            {
                minutes = (seconds % (days * 24 * 3600)) / 60;
                if (minutes > 0)
                {
                    cout << minutes << " minute(s)" << endl;
                    seconds = seconds % (minutes * 60);

                    if (seconds > 0)
                        cout << seconds << " second(s)" << endl;
                }
                else
                {
                    seconds = (seconds % (days * 3600 * 24));

                    if (seconds > 0)
                        cout << seconds << " second(s)" << endl;
                }
            }
        }
        else
        {
            hours = seconds / 3600;
            if (hours > 0)
            {
                cout << hours << " hour(s)" << endl;
                minutes = (seconds % (hours * 3600)) / 60;

                if (minutes > 0)
                {
                    cout << minutes << " minute(s)" << endl;
                    seconds = seconds % (minutes * 60);

                    if (seconds > 0);
                        cout << seconds << " second(s)" << endl;
                }
                else
                {
                    seconds = (seconds % (hours * 3600));

                    if (seconds > 0)
                        cout << seconds << " second(s)" << endl;
                }
            }
            else
            {
                minutes = seconds / 60;
                if (minutes > 0)
                {
                    cout << minutes << " minute(s)" << endl;
                    seconds = seconds % (minutes * 60);

                    if (seconds > 0)
                        cout << seconds << " second(s)" << endl;
                }
                else
                        cout << seconds << " second(s)" << endl;
            }
        }
    }
return 0;
}
