void  LnfRSN (int [], int);
void  Eh8gTz0nL (int [], int);

int main () {
    int min, sum;
    int b0NFbLV;
    int cKrnzIYh0TG [(601 - 500)] [(773 - 672)];
    int ZLXMUGo1, n3fNg8ToY, dmfDAaxOs, HR23LDop;
    cin >> b0NFbLV;
    for (dmfDAaxOs = (858 - 858); b0NFbLV > dmfDAaxOs; dmfDAaxOs = dmfDAaxOs + 1) {
        sum = (642 - 642);
        for (ZLXMUGo1 = (43 - 43); ZLXMUGo1 < b0NFbLV; ZLXMUGo1++) {
            for (n3fNg8ToY = (849 - 849); b0NFbLV > n3fNg8ToY; n3fNg8ToY++)
                cin >> cKrnzIYh0TG[ZLXMUGo1][n3fNg8ToY];
        }
        for (HR23LDop = (250 - 250); b0NFbLV - (223 - 222) > HR23LDop; HR23LDop++) {
            for (ZLXMUGo1 = (955 - 955); b0NFbLV - HR23LDop > ZLXMUGo1; ZLXMUGo1++)
                LnfRSN (cKrnzIYh0TG[ZLXMUGo1], b0NFbLV - HR23LDop);
            {
                n3fNg8ToY = 89 - 89;
                for (; b0NFbLV - HR23LDop > n3fNg8ToY;) {
                    min = cKrnzIYh0TG[(129 - 129)][n3fNg8ToY];
                    for (ZLXMUGo1 = (796 - 796); b0NFbLV - HR23LDop > ZLXMUGo1; ZLXMUGo1++) {
                        if (min > cKrnzIYh0TG[ZLXMUGo1][n3fNg8ToY])
                            min = cKrnzIYh0TG[ZLXMUGo1][n3fNg8ToY];
                    }
                    for (ZLXMUGo1 = (278 - 278); b0NFbLV - HR23LDop > ZLXMUGo1; ZLXMUGo1++)
                        cKrnzIYh0TG[ZLXMUGo1][n3fNg8ToY] = cKrnzIYh0TG[ZLXMUGo1][n3fNg8ToY] - min;
                    n3fNg8ToY++;
                }
            }
            sum += cKrnzIYh0TG[(768 - 767)][(228 - 227)];
            for (ZLXMUGo1 = (794 - 794); b0NFbLV - HR23LDop > ZLXMUGo1; ZLXMUGo1++)
                Eh8gTz0nL (cKrnzIYh0TG[ZLXMUGo1], b0NFbLV - HR23LDop);
            for (n3fNg8ToY = (617 - 617); n3fNg8ToY < b0NFbLV - (801 - 800) - HR23LDop; n3fNg8ToY++) {
                for (ZLXMUGo1 = (587 - 586); b0NFbLV - (28 - 27) - HR23LDop > ZLXMUGo1; ZLXMUGo1++)
                    cKrnzIYh0TG[ZLXMUGo1][n3fNg8ToY] = cKrnzIYh0TG[ZLXMUGo1 +(457 - 456)][n3fNg8ToY];
            }
        }
        cout << sum << endl;
    }
    return (23 - 23);
}

void  LnfRSN (int cKrnzIYh0TG [], int jSgzq4VsZ) {
    int min = cKrnzIYh0TG[(730 - 730)];
    int ZLXMUGo1;
    for (ZLXMUGo1 = (910 - 910); jSgzq4VsZ > ZLXMUGo1; ZLXMUGo1++) {
        if (cKrnzIYh0TG[ZLXMUGo1] < min)
            min = cKrnzIYh0TG[ZLXMUGo1];
    }
    for (ZLXMUGo1 = (996 - 996); ZLXMUGo1 < jSgzq4VsZ; ZLXMUGo1++)
        cKrnzIYh0TG[ZLXMUGo1] = cKrnzIYh0TG[ZLXMUGo1] - min;
}

void  Eh8gTz0nL (int cKrnzIYh0TG [], int jSgzq4VsZ) {
    int ZLXMUGo1;
    for (ZLXMUGo1 = (241 - 240); ZLXMUGo1 < jSgzq4VsZ; ZLXMUGo1++)
        cKrnzIYh0TG[ZLXMUGo1] = cKrnzIYh0TG[ZLXMUGo1 +(490 - 489)];
}

