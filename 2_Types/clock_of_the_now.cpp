#include <cstdio>


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
    int get_year() {
        return year;
    }
    private:
        int year;
};

int main() {
    ClockOfTheNow clock;
    printf("Year: %d\n", clock.get_year());
    clock.add_year();
    printf("Year: %d\n", clock.get_year());
    clock.set_year(2020);
    printf("Year: %d\n", clock.get_year());
    clock.set_year(2018);
    printf("Year: %d\n", clock.get_year());
    int a{};
    printf("a = %d\n", a);
    return 0;
}
