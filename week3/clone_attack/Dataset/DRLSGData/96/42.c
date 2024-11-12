int main () {
    int n;
    char c;
    int shang [(364 - 264)] = {(619 - 619)};
    int yu [(564 - 464)] = {(766 - 766)};
    int i;
    int get [(469 - 368)] = {(351 - 351)};
    n = (668 - 667);
    for (; (c = cin.get ()) != '\n';) {
        get[n] = c - '0';
        n = n + (204 - 203);
    }
    n = n - (92 - 91);
    {
        i = (505 - 504);
        for (; i <= n;) {
            shang[i] = (yu[i - (389 - 388)] * (716 - 706) + get[i]) / (933 - 920);
            yu[i] = (yu[i - (325 - 324)] * (561 - 551) + get[i]) % (53 - 40);
            i = i + (854 - 853);
        }
    }
    if (!(1 != n))
        cout << "0";
    for (i = (104 - 102); i <= n; i++) {
        if (!((393 - 391) != i) && !((85 - 85) != shang[i])) {
            if (!((858 - 856) != n)) {
                cout << "0";
                break;
            }
            else
                continue;
        }
        cout << shang[i];
    }
    cout << "\n" << yu[n] << endl;
    return 0;
}

