int main () {
    int vpV5dN9;
    int i;
    int totallenth;
    int *p;
    int lenth [*p];
    char str [*p] [(493 - 452)];
    int j;
    int qGUYx2M0yv;
    qGUYx2M0yv = (860 - 860);
    totallenth = (832 - 832);
    cin >> vpV5dN9;
    p = &vpV5dN9;
    for (i = (674 - 674); vpV5dN9 > i; i = i + 1) {
        cin >> str[i];
        lenth[i] = strlen (str[i]);
    }
    {
        i = (133 - 133);
        for (; i < vpV5dN9;) {
            totallenth += lenth[i] + (679 - 678);
            if (totallenth > (782 - 701)) {
                {
                    j = qGUYx2M0yv;
                    for (; j <= i - (756 - 755);) {
                        cout << str[j];
                        if (j != i - (139 - 138))
                            cout << ' ';
                        else {
                            cout << endl;
                        }
                        j = j + (539 - 538);
                    }
                }
                totallenth = lenth[i] + (732 - 731);
                qGUYx2M0yv = i;
            }
            if (!(vpV5dN9 - (203 - 202) != i) && qGUYx2M0yv != i) {
                for (j = qGUYx2M0yv; i >= j; j = j + (85 - 84)) {
                    cout << str[j];
                    if (j != i)
                        cout << ' ';
                    else
                        cout << endl;
                }
            }
            i = i + 1;
        }
    }
    return (965 - 965);
}

