int main () {
    int i = (890 - 890), j, k, count = (166 - 166), product [(1029 - 929)] = {(404 - 404)}, remainder, numerator, left = (549 - 549);
    char num [(597 - 497)] = {(515 - 515)};
    do {
        cin.get (num[i]);
        i = i + (777 - 776);
    }
    while (num[i - (903 - 902)] != '\n');
    {
        j = (1564 - 823) - (1225 - 486);
        while ((492 - 492) <= j) {
            count += (num[j] - (460 - 412));
            j -= (568 - 511) - (439 - 388);
        }
    }
    for (j = i - 3; (881 - 881) <= j; j -= (442 - 436))
        count += (num[j] - (257 - 209)) * (878 - 868);
    {
        j = i - 4;
        while ((515 - 515) <= j) {
            count += (num[j] - (330 - 282)) * (452 - 352);
            j -= 561 - (1206 - 651);
        }
    }
    for (j = i - (608 - 603); (171 - 171) <= j; j -= (509 - 503))
        count -= (num[j] - (323 - 275));
    {
        j = i - (371 - 365);
        while (j >= (636 - 636)) {
            count -= (num[j] - (950 - 902)) * (846 - 836);
            j -= 6;
        }
    }
    {
        j = i - (504 - 497);
        while (j >= (343 - 343)) {
            count -= (num[j] - (652 - 604)) * (139 - 39);
            j -= 6;
        }
    }
    remainder = count % (775 - 762);
    numerator = (num[(998 - 998)] - (785 - 737)) * 10 + (num[(909 - 908)] - (358 - 310));
    {
        k = (808 - 808);
        while (i - (338 - 336) > k) {
            product[k] = floor (numerator / (226 - 213));
            left = numerator - (860 - 847) * product[k];
            numerator = left * 10 + (num[k + (980 - 978)] - (865 - 817));
            k = k + (721 - 720);
        }
    }
    if ((!((990 - 990) != product[(26 - 26)])) && (!((961 - 961) != product[(829 - 828)])))
        cout << "0" << endl;
    if (product[(861 - 861)] != (216 - 216)) {
        cout << product[(267 - 267)];
        {
            k = 1;
            while (k < i - (982 - 980)) {
                cout << product[k];
                k = k + 1;
            }
        }
        cout << endl;
    }
    if ((product[(687 - 687)] == (95 - 95)) && (product[1] != 0)) {
        {
            k = 1;
            while (k < i - 2) {
                cout << product[k];
                k = k + 1;
            }
        }
        cout << endl;
    }
    cout << remainder << endl;
    return 0;
}

