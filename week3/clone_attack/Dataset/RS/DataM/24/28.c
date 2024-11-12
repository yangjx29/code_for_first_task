int main () {
    char max [50], min [50], temp [50], t;
    int maxnum = 0, minnum = 99, i, flag = 0;
    for (; 1;) {
        do {
            t = cin.get ();
        }
        while (t == ' ' || !(',' != t));
        for (i = 0; t != ' ' && !(',' == t);) {
            temp[i] = t;
            t = cin.get ();
            i++;
            if (t == '\n') {
                flag = 1;
                break;
            };
        }
        temp[i] = '\0';
        if (i > maxnum) {
            maxnum = i;
            strcpy (max, temp);
        }
        if (i < minnum) {
            minnum = i;
            strcpy (min, temp);
        }
        if (flag == 1)
            break;
    }
end :
    cout << max << endl;
    cout << min << endl;
    return 0;
}

