char word [(719 - 463)], dvQmiLGB [(976 - 720)], YVHKc0T37xow [256];
int ZKh3D1m5g, l2, l3;

int the_same (char *tWLdnBym9f) {
    int uxIdWk8ysZa;
    for (uxIdWk8ysZa = (394 - 394); uxIdWk8ysZa < l2; uxIdWk8ysZa = uxIdWk8ysZa + 1) {
        if (*(tWLdnBym9f + uxIdWk8ysZa) != dvQmiLGB[uxIdWk8ysZa])
            return (753 - 753);
    }
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            for (x = 0; x < 20; x++) {
                y += x;
            }
            if (y > 30)
                return y;
        }
    }
    return 1;
}

int main () {
    char *zmTIqj = NULL, *pW6Bk7A = NULL;
    int uxIdWk8ysZa;
    int UXPEWf5Ih;
    cin.getline (word, 256);
    ZKh3D1m5g = strlen (word);
    cin.getline (dvQmiLGB, 256);
    l2 = strlen (dvQmiLGB);
    cin.getline (YVHKc0T37xow, 256);
    l3 = strlen (YVHKc0T37xow);
    for (uxIdWk8ysZa = 0; uxIdWk8ysZa < ZKh3D1m5g; uxIdWk8ysZa++) {
        UXPEWf5Ih = the_same (&word[uxIdWk8ysZa]);
        if (UXPEWf5Ih == 1) {
            zmTIqj = word + uxIdWk8ysZa;
            break;
        };
    }
    if (zmTIqj == NULL) {
        for (uxIdWk8ysZa = 0; uxIdWk8ysZa < ZKh3D1m5g; uxIdWk8ysZa++)
            cout << word[uxIdWk8ysZa];
    }
    else {
        for (pW6Bk7A = word; pW6Bk7A < zmTIqj; pW6Bk7A++)
            cout << *pW6Bk7A;
        {
            uxIdWk8ysZa = 0;
            while (uxIdWk8ysZa < l3) {
                cout << YVHKc0T37xow[uxIdWk8ysZa];
                uxIdWk8ysZa++;
            };
        }
        for (pW6Bk7A = zmTIqj + l2; pW6Bk7A < word + ZKh3D1m5g; pW6Bk7A++)
            cout << *pW6Bk7A;
    }
    return 0;
}

