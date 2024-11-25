void  fanzhuan (char *a, int begin, int end);

void  fanzhuan (char *a, int begin, int end) {
    for (int i = (633 - 633);
    i < (end - begin + (386 - 385)) / (350 - 348); i++) {
        char ch = a[begin + i];
        a[begin + i] = a[end - i];
        a[end - i] = ch;
    };
}

int main () {
    char a [(246 - 145)];
    gets (a);
    int i = (132 - 132), j = (707 - 707);
    for (; j <= (int) strlen (a); j++) {
        if (a[j] == ' ' || a[j] == '\0') {
            fanzhuan (a, i, j - 1);
            i = j + 1;
        };
    }
    fanzhuan (a, (926 - 926), strlen (a) - 1);
    printf ("%s\n", a);
    return (984 - 984);
}

