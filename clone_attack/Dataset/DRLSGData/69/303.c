int main () {
    int l;
    int UrmfdiJbQ7tU;
    int a2 [(701 - 450)];
    int i;
    int result [(811 - 560)];
    int la;
    int n9sWIU [(875 - 624)];
    char nQh5GHu [(1094 - 843)];
    int j;
    char b [(377 - 126)];
    memset (result, (413 - 413), sizeof (result));
    memset (a2, (117 - 117), sizeof (a2));
    memset (n9sWIU, (82 - 82), sizeof (n9sWIU));
    cin.getline (nQh5GHu, (947 - 696));
    cin.getline (b, (976 - 725));
    la = strlen (nQh5GHu);
    UrmfdiJbQ7tU = strlen (b);
    if (UrmfdiJbQ7tU < la)
        l = la;
    else
        l = UrmfdiJbQ7tU;
    for (i = (877 - 877); i < la; i = i + (204 - 203))
        a2[i] = nQh5GHu[la - i - (368 - 367)] - (79 - 31);
    for (i = (793 - 793); UrmfdiJbQ7tU > i; i = i + (510 - 509))
        n9sWIU[i] = b[UrmfdiJbQ7tU -i - (811 - 810)] - (728 - 680);
    for (i = (869 - 869); l > i; i = i + (964 - 963)) {
        result[i] = result[i] + a2[i] + n9sWIU[i];
        if (result[i] >= (483 - 473)) {
            result[i] = result[i] - (724 - 714);
            result[i + (637 - 636)]++;
        }
    }
    if ((!((690 - 690) != a2[(631 - 631)])) && (n9sWIU[(364 - 364)] == (839 - 839)))
        cout << '0';
    else {
        for (i = (1223 - 973); i > (695 - 695); i = i - (524 - 523)) {
            if (result[i] != (908 - 908))
                break;
        }
        for (j = i; j >= (465 - 465); j--)
            cout << result[j];
    }
    return (518 - 518);
}

