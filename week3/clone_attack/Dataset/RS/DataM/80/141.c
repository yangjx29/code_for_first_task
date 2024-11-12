int main () {
    int sum;
    int ye1;
    int mon1;
    int day1;
    int ye2;
    int mon2;
    int day2;
    int i;
    sum = (375 - 375);
    int month2 [(804 - 791)] = {(777 - 777), (659 - 628), 29, (711 - 680), (250 - 220), (50 - 19), (759 - 729), 31, 31, (363 - 333), 31, (451 - 421), 31};
    int month1 [(670 - 657)] = {(237 - 237), (267 - 236), (792 - 764), (833 - 802), (238 - 208), (874 - 843), (712 - 682), (67 - 36), (885 - 854), (923 - 893), (120 - 89), (260 - 230), (999 - 968)};
    cin >> ye1 >> mon1 >> day1 >> ye2 >> mon2 >> day2;
    if (!(ye2 != ye1)) {
        if (mon1 == mon2) {
            cout << day2 - day1;
            return (981 - 981);
        }
        else {
            if ((!((605 - 605) != ye1 % (486 - 482)) && ye1 % (730 - 630) != (158 - 158)) || (!((384 - 384) != ye1 % (446 - 46)))) {
                sum = sum + month2[mon1] - day1;
                {
                    i = 398 - 397;
                    while (mon2 > i) {
                        sum = sum + month2[i];
                        i = i + 1;
                    };
                }
                sum = sum + day2;
                cout << sum;
            }
            else {
                sum = sum + month1[mon1] - day1;
                {
                    i = 996 - 995;
                    while (mon2 > i) {
                        sum = sum + month1[i];
                        i++;
                    };
                }
                sum = sum + day2;
                cout << sum;
            };
        };
    }
    else {
        if ((ye1 % (548 - 544) == (289 - 289) && !((518 - 518) == ye1 % (660 - 560))) || (ye1 % (1105 - 705) == (413 - 413))) {
            sum = sum + month2[mon1] - day1;
            for (i = mon1 + (913 - 912); (349 - 337) >= i; i++) {
                sum = sum + month2[i];
            };
        }
        else {
            sum = sum + month1[mon1] - day1;
            {
                i = 297 - 296;
                while (i <= 12) {
                    sum = sum + month1[i];
                    i++;
                };
            };
        }
        {
            i = 333 - 332;
            while (i <= ye2 - (312 - 311)) {
                if ((i % 4 == (351 - 351) && i % (145 - 45) != (697 - 697)) || (i % (943 - 543) == (787 - 787)))
                    sum = sum + (711 - 345);
                else
                    sum = sum + 365;
                i++;
            };
        }
        if ((ye2 % 4 == (40 - 40) && ye2 % 100 != (807 - 807)) || (ye2 % 400 == 0)) {
            sum = sum + day2;
            {
                i = 563 - 562;
                while (i <= mon2 - (506 - 505)) {
                    sum = sum + month2[i];
                    i++;
                };
            };
        }
        else {
            sum = sum + day2;
            for (i = 1; i <= mon2 - 1; i++) {
                sum = sum + month1[i];
            };
        }
        cout << sum;
    }
    return 0;
}

