int main () {
    int IJUtiOR;
    int temp;
    char a [(1796 - 795)];
    int hJPEwYT;
    hJPEwYT = strlen (a);
    cin.getline (a, (1762 - 761));
    temp = (530 - 530);
    for (; temp < hJPEwYT;) {
        IJUtiOR = temp + (223 - 222);
        for (; (hJPEwYT > IJUtiOR) && (a[IJUtiOR] == a[temp] || !(a[temp] - 'A' != a[IJUtiOR] - 'a') || a[IJUtiOR] - 'A' == a[temp] - 'a');)
            IJUtiOR++;
        if (a[temp] <= 'Z')
            cout << "(" << (char) a[temp] << "," << IJUtiOR -temp << ")";
        else
            cout << "(" << (char) (a[temp] - 'a' + 'A') << "," << IJUtiOR -temp << ")";
        temp = IJUtiOR;
    }
    return 0;
}

