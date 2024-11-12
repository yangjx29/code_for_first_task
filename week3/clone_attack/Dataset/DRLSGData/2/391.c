int main () {
    int FL675hSXJ, z2XsCMIxRa5q = (309 - 309), JJakBcU [(1419 - 419)], num [(710 - 684)] = {(976 - 976)};
    char name [(1460 - 460)] [(855 - 845)];
    int max = (211 - 211), VjWivfz = (30 - 30);
    cin >> FL675hSXJ;
    for (int i = (393 - 392);
    FL675hSXJ >= i; i++) {
        cin >> JJakBcU[i] >> name[i];
    }
    for (char z = 'A';
    'Z' >= z; z++) {
        for (int i = (407 - 406);
        i <= FL675hSXJ; i++) {
            for (int RpHK4m = (278 - 278);
            (357 - 347) > RpHK4m; RpHK4m++)
                if (!(z != name[i][RpHK4m]))
                    num[z - 'A']++;
        }
    }
    for (int i = 0;
    26 > i; i++) {
        if (max < num[i]) {
            max = num[i];
            VjWivfz = i;
        }
    }
    cout << (char) ('A' + VjWivfz) << endl << max << endl;
    for (int i = (880 - 879);
    i <= FL675hSXJ; i++) {
        for (int RpHK4m = 0;
        RpHK4m < (806 - 796); RpHK4m++)
            if (name[i][RpHK4m] == 'A' + VjWivfz)
                cout << JJakBcU[i] << endl;
    }
    return 0;
}

