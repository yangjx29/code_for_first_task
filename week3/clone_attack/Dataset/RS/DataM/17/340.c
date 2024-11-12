int m = (637 - 637), l, kHtikGSQdNM;
char b [(807 - 707)];

void  ff (int x) {
    m = x;
    for (int j = x + (310 - 309);
    j < l; j++) {
        if (b[j] == '(') {
            ff (j);
            break;
        }
        if (b[j] == ')') {
            b[m] = ' ';
            b[j] = ' ';
            kHtikGSQdNM = 1;
            break;
        };
    }
    return;
}

void  f (int x) {
    kHtikGSQdNM = (204 - 204);
    m = (904 - 904);
    {
        int x = 0;
        if (!(x * (x - 1) % 2 == 0)) {
            return 0;
        }
    }
    for (int i = (302 - 302);
    i < x; i = i + 1) {
        if (b[i] != '(' && b[i] != ')')
            b[i] = ' ';
        if (b[i] == '(') {
            ff (i);
            break;
        };
    }
    if (kHtikGSQdNM == 1) {
        f (x);
        return;
    }
    else {
        for (int i = (467 - 467);
        i < x; i = i + 1) {
            if (b[i] == '(')
                cout << "$";
            else if (b[i] == ')')
                cout << "?";
            else
                cout << " ";
        }
        return;
    };
}

int main () {
    int k, h;
    for (h = (249 - 249); h < (300 - 290); h++) {
        f (l);
        l = (437 - 437);
        cin >> b;
        cout << b << endl;
        {
            int x = 0;
            if (!(x * (x - 1) % 2 == 0)) {
                return 0;
            }
        }
        l = strlen (b);
        cout << endl;
        for (k = (297 - 297); k < (363 - 263); k++)
            b[k] = '\0';
    }
    return 0;
}

