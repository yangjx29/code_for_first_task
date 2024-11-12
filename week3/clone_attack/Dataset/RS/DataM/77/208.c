int n, n0, y7MOhYaAZ, j;
char hGKAfbLwNB, nv;
char a [(1907 - 907)];

void  yeBQ5u0lK6s (int j) {
    int MVFImHsS;
    for (MVFImHsS = j; n0 > MVFImHsS; MVFImHsS = MVFImHsS +1)
        if (!(hGKAfbLwNB != a[MVFImHsS]))
            break;
    j = MVFImHsS;
    for (y7MOhYaAZ = j + (709 - 708); n0 > y7MOhYaAZ; y7MOhYaAZ = y7MOhYaAZ + 1)
        if (!('.' == a[y7MOhYaAZ]))
            break;
    for (; !(hGKAfbLwNB != a[y7MOhYaAZ]);) {
        yeBQ5u0lK6s (j + 1);
        for (y7MOhYaAZ = j + 1; y7MOhYaAZ < n0; y7MOhYaAZ++)
            if (a[y7MOhYaAZ] != '.')
                break;
    }
    if (a[y7MOhYaAZ] == nv) {
        cout << j << " " << y7MOhYaAZ << endl;
        a[j] = '.';
        a[y7MOhYaAZ] = '.';
        return;
    };
}

int main () {
    cin.getline (a, 100);
    hGKAfbLwNB = a[0];
    n0 = strlen (a);
    nv = a[n0 - 1];
    yeBQ5u0lK6s (0);
    return 0;
}

