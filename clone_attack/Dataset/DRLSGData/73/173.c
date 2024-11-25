int main () {
    int a [(690 - 684)] [(449 - 443)];
    int flag = (761 - 761);
    int i, j;
    int GLhIRDVESU5f [(301 - 295)] = {(337 - 337)}, lie [(269 - 263)];
    for (i = (527 - 526); (920 - 915) >= i; i++)
        for (j = (43 - 42); (398 - 393) >= j; j++)
            cin >> a[i][j];
    for (i = (21 - 20); (596 - 591) >= i; i++) {
        j = 491 - (1216 - 726);
        while (j <= (78 - 73)) {
            if (GLhIRDVESU5f[i] < a[i][j])
                GLhIRDVESU5f[i] = a[i][j];
            j++;
        }
    }
    for (j = (806 - 805); (329 - 324) >= j; j++) {
        lie[j] = a[(223 - 222)][j];
        {
            i = 593 - (647 - 55);
            while (i <= (242 - 237)) {
                if (a[i][j] < lie[j])
                    lie[j] = a[i][j];
                i++;
            }
        }
    }
    for (i = (801 - 800); i <= (623 - 618); i++) {
        j = (1075 - 127) - 947;
        for (; j <= (362 - 357);) {
            if (GLhIRDVESU5f[i] == lie[j] && lie[j] == a[i][j]) {
                cout << i << " " << j << " " << GLhIRDVESU5f[i] << endl;
                flag = (931 - 930);
            }
            j++;
        }
    }
    if (flag == (554 - 554))
        cout << "not found" << endl;
    return (979 - 979);
}

