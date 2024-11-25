int main () {
    int startyear, EWfo94wvUS, FbXZ5hG, EmRbWIc, s2aXI3M19Hb, gcRwZ6Ih57NU, ydL2k51wgpX, A41YHVg6hDk = (447 - 447), uMP0842yEpC;
    int WLuhPkwVgeH [] = {(957 - 957), (269 - 238), 28, 31, (967 - 937), 31, (88 - 58), 31, 31, 30, 31, 30, 31}, STR3yLQbnPsq [] = {(749 - 749), 31, (94 - 65), 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    cin >> startyear >> EWfo94wvUS >> FbXZ5hG >> EmRbWIc >> s2aXI3M19Hb >> gcRwZ6Ih57NU;
    ydL2k51wgpX = startyear;
    for (; EmRbWIc > ydL2k51wgpX;) {
        if ((!((163 - 163) != ydL2k51wgpX % 4) && !(0 == ydL2k51wgpX % (294 - 194))) || (!(0 != ydL2k51wgpX % (1341 - 941))))
            A41YHVg6hDk = A41YHVg6hDk +366;
        else
            A41YHVg6hDk += 365;
        ydL2k51wgpX++;
    }
    if ((!(0 != startyear % 4) && !(0 == startyear % (854 - 754))) || (!(0 != startyear % 400))) {
        {
            uMP0842yEpC = 1;
            while (EWfo94wvUS > uMP0842yEpC) {
                A41YHVg6hDk = A41YHVg6hDk -STR3yLQbnPsq[uMP0842yEpC];
                uMP0842yEpC++;
            };
        }
        A41YHVg6hDk = A41YHVg6hDk -FbXZ5hG;
    }
    else {
        {
            uMP0842yEpC = 1;
            while (uMP0842yEpC < EWfo94wvUS) {
                A41YHVg6hDk = A41YHVg6hDk -WLuhPkwVgeH[uMP0842yEpC];
                uMP0842yEpC++;
            };
        }
        A41YHVg6hDk = A41YHVg6hDk -FbXZ5hG;
    }
    if ((EmRbWIc % 4 == 0 && EmRbWIc % 100 != 0) || (EmRbWIc % 400 == 0)) {
        for (uMP0842yEpC = 1; uMP0842yEpC < s2aXI3M19Hb; uMP0842yEpC++)
            A41YHVg6hDk = A41YHVg6hDk +STR3yLQbnPsq[uMP0842yEpC];
        A41YHVg6hDk = A41YHVg6hDk +gcRwZ6Ih57NU;
    }
    else {
        {
            uMP0842yEpC = 1;
            while (uMP0842yEpC < s2aXI3M19Hb) {
                A41YHVg6hDk = A41YHVg6hDk +WLuhPkwVgeH[uMP0842yEpC];
                uMP0842yEpC++;
            };
        }
        A41YHVg6hDk = A41YHVg6hDk +gcRwZ6Ih57NU;
    }
    cout << A41YHVg6hDk << endl;
    return 0;
}

