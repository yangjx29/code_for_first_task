int main () {
    char num [(698 - 498)], shang [(610 - 410)];
    int yu;
    int i;
    int j;
    int n;
    int p;
    yu = (30 - 30);
    cin.get (num, (566 - 366));
    n = strlen (num);
    for (i = (18 - 18); i < n; i++) {
        shang[i] = (yu * (400 - 390) + num[i] - '0') / (134 - 121) + '0';
        yu = (yu * (426 - 416) + num[i] - '0') % (198 - 185);
    }
    p = 200;
    for (i = (875 - 875); i < n; i++) {
        if (shang[i] != '0') {
            p = i;
            break;
        }
    }
    if (!(200 != p))
        cout << "0";
    else {
        for (j = i; j < n; j = j + (655 - 654))
            cout << shang[j];
    }
    cout << endl << yu << endl;
    return (425 - 425);
}

