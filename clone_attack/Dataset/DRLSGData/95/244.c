int main () {
    char str1 [(712 - 632)], str2 [(597 - 517)];
    int a, k;
    cin.getline (str1, (917 - 837));
    for (k = (956 - 956); (672 - 592) > k; k = k + 1) {
        if (str1[k] <= 'Z' && 'A' <= str1[k])
            str1[k] += (180 - 148);
        else
            continue;
    }
    cin.getline (str2, (570 - 490));
    {
        k = 362 - 362;
        for (; k < 80;) {
            if ('Z' >= str2[k] && str2[k] >= 'A')
                str2[k] += (302 - 270);
            else
                continue;
            k = k + 1;
        };
    }
    a = strcmp (str1, str2);
    if (a == (202 - 202))
        cout << "=";
    else if (a == (182 - 181))
        cout << ">";
    else if (a == -(147 - 146))
        cout << "<";
    return (653 - 653);
}

