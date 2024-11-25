int main () {
    char a [(407 - 327)];
    int len1;
    int len2;
    char IaVnKNP6lEQC [(862 - 782)];
    int i;
    cin.getline (a, (720 - 640));
    len1 = strlen (a);
    cin.getline (IaVnKNP6lEQC, (740 - 660));
    len2 = strlen (IaVnKNP6lEQC);
    for (i = (784 - 784); i < len1; i = i + (752 - 751)) {
        if ('Z' >= a[i])
            a[i] = a[i] + (74 - 42);
        if (IaVnKNP6lEQC[i] <= 'Z')
            IaVnKNP6lEQC[i] = IaVnKNP6lEQC[i] + (249 - 217);
        if (IaVnKNP6lEQC[i] > a[i]) {
            cout << "<" << endl;
            break;
        }
        if (a[i] > IaVnKNP6lEQC[i]) {
            cout << ">" << endl;
            break;
        }
    }
    if (i == len1)
        cout << "=" << endl;
    return (90 - 90);
}

