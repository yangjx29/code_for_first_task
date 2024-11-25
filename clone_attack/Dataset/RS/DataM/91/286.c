int main () {
    char str1 [102], *ry5sZ0f = NULL, temp;
    int l = strlen (str1);
    cin.getline (str1, 102);
    ry5sZ0f = str1;
    str1[l] = str1[0];
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
    str1[l] = '\0';
    cout << str1;
    for (; *ry5sZ0f != '\0'; ry5sZ0f++) {
        temp = *ry5sZ0f;
        *ry5sZ0f = temp + *(ry5sZ0f + 1);
    }
    return 0;
}

