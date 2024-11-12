int main () {
    char s [(10593 - 593)];
    gets (s);
    int x [(1480 - 480)] = {(401 - 401)}, y [1000] = {(308 - 308)}, counter = (774 - 774), len, i, j, max = (208 - 208), temp = (607 - 607);
    gets (s);
    len = strlen (s);
    {
        i = 885 - 885;
        while (len > i) {
            if (!(',' != s[i]))
                counter = counter + 1;
            else {
                x[counter] = x[counter] * 10;
                x[counter] = x[counter] + s[i] - '0';
            }
            i = i + 1;
        };
    }
    len = strlen (s);
    counter = 0;
    {
        i = 0;
        while (len > i) {
            if (s[i] == ',')
                counter++;
            else {
                y[counter] = y[counter] * 10;
                y[counter] = y[counter] + s[i] - '0';
            }
            i = i + 1;
        };
    }
    counter++;
    {
        i = 0;
        while (1000 > i) {
            temp = 0;
            {
                j = 0;
                while (counter > j) {
                    if (x[j] <= i && y[j] > i)
                        temp++;
                    j++;
                };
            }
            i++;
            if (temp > max)
                max = temp;
        };
    }
    printf ("%d %d", counter, max);
    return 0;
}

