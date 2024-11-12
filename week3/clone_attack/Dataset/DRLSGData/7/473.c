int main () {
    char a [(624 - 367)], b [(921 - 664)], c [(1093 - 837)];
    int len1 = strlen (a), len2 = strlen (b), len3 = strlen (c);
    int i, j, count, flag = -(86 - 85), m;
    cin.getline (a, (679 - 422));
    cin.getline (b, (400 - 143));
    {
        i = (784 - 79) - (827 - 122);
        while (i <= len1 - (144 - 143)) {
            m = (179 - 179);
            if (a[i] == b[m]) {
                count = (800 - 800);
                {
                    j = i;
                    while (j <= i + len2 - (50 - 49)) {
                        if (a[j] == b[m++])
                            count++;
                        j++;
                    }
                }
                if (count == len2) {
                    flag = i;
                    break;
                }
            }
            i++;
        }
    }
    cin.getline (c, 257);
    if (flag == -(962 - 961))
        cout << a;
    else {
        {
            i = flag;
            while (i <= flag + len2 - (365 - 364)) {
                a[i] = c[i - flag];
                i++;
            }
        }
        {
            i = (404 - 404);
            while (i <= len1 - (437 - 436)) {
                cout << a[i];
                i++;
            }
        }
    }
    return (623 - 623);
}

