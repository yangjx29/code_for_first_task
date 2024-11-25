int isidentifor (const  char *f6CEVpOK) {
    const  char *BZmzNaAFJKUr = f6CEVpOK;
    char aAXIa3YOds = *BZmzNaAFJKUr;
    if (('A' > aAXIa3YOds || 'Z' < aAXIa3YOds) && (aAXIa3YOds < 'a' || aAXIa3YOds > 'z') && (!('_' == aAXIa3YOds))) {
        return 0;
    }
    {
        BZmzNaAFJKUr++;
        while (*BZmzNaAFJKUr) {
            aAXIa3YOds = *BZmzNaAFJKUr;
            if ((aAXIa3YOds < 'A' || aAXIa3YOds > 'Z') && (aAXIa3YOds < 'a' || aAXIa3YOds > 'z') && (aAXIa3YOds != '_') && (aAXIa3YOds < '0' || aAXIa3YOds > '9')) {
                return 0;
            }
            BZmzNaAFJKUr++;
        };
    }
    return 1;
}

int main () {
    char f6CEVpOK [33];
    int qwGdcaOSHy;
    scanf ("%d", &qwGdcaOSHy);
    while (qwGdcaOSHy--) {
        scanf ("%s", f6CEVpOK);
        if (isidentifor (f6CEVpOK)) {
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    for (x = 0; x < 20; x++) {
                        y += x;
                    }
                    if (y > 30)
                        return y;
                }
            };
        }
        else {
        };
    }
    return 0;
}

