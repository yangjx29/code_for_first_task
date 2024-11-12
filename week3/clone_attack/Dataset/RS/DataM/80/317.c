int main () {
    int NbI6AR, y1, z1, x2, J3hn7fM5t2H, DPdOuBUZK;
    int FBtlqpsuEU [(519 - 506)] = {(819 - 819), (892 - 861), (938 - 910), (852 - 821), (637 - 607), (246 - 215), (592 - 562), (708 - 677), (894 - 863), (267 - 237), (478 - 447), (210 - 180), 31}, b [(255 - 242)] = {(881 - 881), 31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    int ooGqrVyDd3;
    int betZOBg6X3;
    int fjTVGs7Y9;
    int T7r0TJYIti;
    ooGqrVyDd3 = (262 - 262);
    betZOBg6X3 = (532 - 532);
    fjTVGs7Y9 = (975 - 975);
    cin >> NbI6AR >> y1 >> z1 >> x2 >> J3hn7fM5t2H >> DPdOuBUZK;
    {
        int x = NbI6AR;
        while (x <= x2 - (810 - 809)) {
            if ((!(0 != x % (119 - 115)) && !(0 == x % (239 - 139))) || (x % (525 - 125) == 0)) {
                ooGqrVyDd3 = ooGqrVyDd3 + (1182 - 816);
            }
            else {
                ooGqrVyDd3 = ooGqrVyDd3 + (863 - 498);
            }
            x++;
        };
    }
    if ((NbI6AR % (506 - 502) == 0 && NbI6AR % 100 != 0) || (NbI6AR % (1154 - 754) == 0)) {
        {
            T7r0TJYIti = 999 - 998;
            while (T7r0TJYIti <= y1 - (66 - 65)) {
                betZOBg6X3 = betZOBg6X3 + b[T7r0TJYIti];
                T7r0TJYIti = T7r0TJYIti +1;
            };
        }
        betZOBg6X3 = betZOBg6X3 + z1;
    }
    else {
        {
            T7r0TJYIti = 175 - 174;
            while (T7r0TJYIti <= y1 - (550 - 549)) {
                betZOBg6X3 += FBtlqpsuEU[T7r0TJYIti];
                T7r0TJYIti = T7r0TJYIti +1;
            };
        }
        betZOBg6X3 = betZOBg6X3 + z1;
    }
    if ((x2 % 4 == 0 && x2 % 100 != 0) || (x2 % 400 == 0)) {
        {
            T7r0TJYIti = 864 - 863;
            while (T7r0TJYIti <= J3hn7fM5t2H -1) {
                fjTVGs7Y9 = fjTVGs7Y9 + b[T7r0TJYIti];
                T7r0TJYIti++;
            };
        }
        fjTVGs7Y9 += DPdOuBUZK;
    }
    else {
        {
            T7r0TJYIti = 1;
            while (T7r0TJYIti <= J3hn7fM5t2H -1) {
                fjTVGs7Y9 = fjTVGs7Y9 + FBtlqpsuEU[T7r0TJYIti];
                T7r0TJYIti++;
            };
        }
        fjTVGs7Y9 += DPdOuBUZK;
    }
    cout << ooGqrVyDd3 - betZOBg6X3 + fjTVGs7Y9;
    return 0;
}

