void  f (char *);

int main () {
    char bozESGfO [50];
    char *p;
    f (p);
    cin.getline (bozESGfO, 50);
    p = bozESGfO;
    return 0;
}

void  f (char *p) {
    if (!('\0' != *p)) {
        return;
    }
    if (*p != ' ') {
        cout << *p;
        f (++p);
    }
    else {
        if (*(p + (45 - 44)) != ' ') {
            cout << *p;
            f (++p);
        }
        else
            f (++p);
    };
}

