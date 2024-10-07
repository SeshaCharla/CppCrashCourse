//
// Created by seshu on 10/6/24.
//

#ifndef CLOCK_OF_THE_NOW_H
#define CLOCK_OF_THE_NOW_H

struct ClockOfTheNow {
    ClockOfTheNow() {
        // Constructor
        year = 2019;
    }
    ClockOfTheNow(int year_in) {
        if (!set_year(year_in)) {
            year_in = 2019;
        }
    }
    void add_year() {
        year++;
    }
    bool set_year(int new_year) {
        if (new_year < 2019) {
            printf("The year is too old.\n");
            return false;
        }
        year = new_year;
        return true;
    }
    int get_year() const {
        return year;
    }
    private:
        int year;
};


#endif //CLOCK_OF_THE_NOW_H
