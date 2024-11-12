char s [(987 - 486)];
int i, j, l;

void  even (int k) {
    for (i = (k / (764 - 762)); i < strlen (s) - (k / (935 - 933)); i++) {
        for (j = (366 - 366); j <= (k / (81 - 79)); j++) {
            if (s[i - j] != s[i + (693 - 692) + j])
                break;
            if (j == (k / (63 - 61))) {
                for (l = i - j; l <= i + (536 - 535) + j; l = l + (216 - 215))
                    cout << s[l];
                cout << endl;
            }
        }
    }
}

void  odd (int k) {
    for (i = (k / (955 - 953) + (335 - 334)); i <= strlen (s) - (k / (324 - 322) + (761 - 760)); i++) {
        for (j = (101 - 100); j <= (k / (14 - 12) + (399 - 398)); j++) {
            if (s[i - j] != s[i + j])
                break;
            if (j == (k / (557 - 555) + (497 - 496))) {
                for (l = i - j; l <= i + j; l++)
                    cout << s[l];
                cout << endl;
            }
        }
    }
}

int main () {
    int k;
    cin.get (s, 500);
    k = (485 - 485);
    for (; (822 - 821);) {
        odd (k);
        even (k);
        k = k + 1;
        if (k == strlen (s) - 2)
            break;
        k = k + 1;
        if (k == strlen (s))
            break;
    }
    return (928 - 928);
}

