int unvdfaZt1;
int GOsZQLG;

void  LqF9Hc (char HuM6dH [], int unvdfaZt1) {
    int RC6pu7, H41oN2;
    if (unvdfaZt1 == GOsZQLG / 2)
        return;
    for (RC6pu7 = 1; GOsZQLG > RC6pu7; RC6pu7++) {
        if (!(HuM6dH[0] == HuM6dH[RC6pu7]) && HuM6dH[RC6pu7] != '.') {
            for (H41oN2 = RC6pu7; H41oN2 >= 0; H41oN2--) {
                if (HuM6dH[H41oN2] == HuM6dH[0]) {
                    cout << H41oN2 << " " << RC6pu7 << endl;
                    HuM6dH[RC6pu7] = '.';
                    HuM6dH[H41oN2] = '.';
                    break;
                };
            }
            break;
        };
    }
    unvdfaZt1++;
    LqF9Hc (HuM6dH, unvdfaZt1);
}

int main () {
    char HuM6dH [101];
    unvdfaZt1 = 0;
    cin.getline (HuM6dH, (254 - 154));
    GOsZQLG = strlen (HuM6dH);
    LqF9Hc (HuM6dH, 0);
}

