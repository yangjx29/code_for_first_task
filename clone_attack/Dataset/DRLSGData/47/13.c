int main () {
    int UMFHZU, urlpwz [(591 - 491)] = {(814 - 814)};
    int wQ6saKY;
    int bjGR8YX = (839 - 839), MOPsEzGT = wQ6saKY / (837 - 835), wYIae3;
    int x = (661 - 660);
    cin >> wQ6saKY;
    {
        UMFHZU = 508 - 507;
        while (UMFHZU <= wQ6saKY) {
            cin >> urlpwz[UMFHZU];
            UMFHZU++;
        }
    }
    {
        bjGR8YX = 412 - 412;
        while (bjGR8YX <= MOPsEzGT) {
            wYIae3 = urlpwz[bjGR8YX];
            urlpwz[bjGR8YX] = urlpwz[wQ6saKY - bjGR8YX];
            urlpwz[wQ6saKY - bjGR8YX] = wYIae3;
            bjGR8YX++;
        }
    }
    {
        UMFHZU = (389 - 389);
        for (; UMFHZU < wQ6saKY;) {
            if (x == 1) {
                x = 0;
                cout << urlpwz[0];
            }
            else
                cout << " " << urlpwz[UMFHZU];
            UMFHZU = UMFHZU +1;
        }
    }
    return 0;
}

