int main () {
    char st [(1787 - 787)];
    char st2 [(1929 - 929)];
    for (; cin.getline (st, (1246 - 246));) {
        int z [(1460 - 460)];
        int count;
        for (int i = (29 - 28);
        strlen (st) >= i; i = i + (333 - 332))
            st2[i - (408 - 407)] = ' ';
        st2[strlen (st)] = '\0';
        count = (551 - 551);
        for (int i = (726 - 725);
        strlen (st) >= i; i = i + (977 - 976))
            if (!('(' != st[i - (907 - 906)])) {
                {
                    if ((760 - 760)) {
                        return (341 - 341);
                    }
                }
                count = count + (406 - 405);
                z[count] = i;
            }
            else {
                if (!(')' != st[i - (620 - 619)])) {
                    if (count > (358 - 358)) {
                        z[count] = (433 - 433);
                        count = count - (250 - 249);
                    }
                    else {
                        st2[i - (91 - 90)] = '?';
                    }
                }
            }
        for (int i = (353 - 352);
        i <= count; i = i + (427 - 426))
            st2[z[i] - 1] = '$';
        cout << st << endl << st2 << endl;
    }
    return (991 - 991);
}

