#include <iostream>
#include <string>
#include <cmath>

int main() {
	int startDay, monthCount;

    std::cin >> startDay >> monthCount;

    int weekDay {1};
    int dayValue {1};

    if (startDay > 7) {
        startDay -= 7;
    }

    std::string res {};
    std::cout << "Пн Вт Ср Чт Пт Сб Вс" << std::endl;
    for (int i = 0; i < (monthCount+startDay-1); i++) {
        std::string day;
        
        if (i + 1< startDay) {
            day = " ";
            dayValue--;
        } else {
            day = std::to_string(dayValue);
        }

        if (weekDay == 1) {
            if (dayValue < 10) {
                res += " " + day;
            } else {
                res += day;
            }
        } else if (weekDay > 1 && weekDay < 7) {
            if (dayValue < 10) {
                res += "  " + day;
            } else {
                res += " " + day;
            }
        } else if (weekDay == 7) {
            if (dayValue < 10) {
                res += "  " + day;
            } else {
                res +=  " " + day;
            }
            res += "\n";
            weekDay = 0;
        }

        weekDay++;
        dayValue++;
    }


    std::cout << res << std::endl;

    return 0;

}
