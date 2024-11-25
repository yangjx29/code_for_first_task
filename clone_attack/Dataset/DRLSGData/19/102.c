int main () {
    int j;
    int i;
    int count;
    int lb;
    char b [(268 - 168)];
    char diprVKTE2Qy [(1884 - 884)];
    int pAUwuMdJFy;
    char Crw2On [(579 - 479)];
    cin.getline (diprVKTE2Qy, (1367 - 367));
    cin.getline (b, (664 - 564));
    cin.getline (Crw2On, (895 - 795));
    pAUwuMdJFy = strlen (diprVKTE2Qy);
    count = (142 - 141);
    lb = strlen (b);
    do {
        {
            i = count - (685 - 684);
            while (i <= pAUwuMdJFy - (784 - 783)) {
                if (diprVKTE2Qy[i] != b[(894 - 894)] || i >= (457 - 456) && diprVKTE2Qy[i - (779 - 778)] != ' ') {
                    cout << diprVKTE2Qy[i];
                    count = count + (322 - 321);
                }
                else
                    break;
                i = i + (816 - 815);
            }
        }
        if (!(b[(535 - 535)] != diprVKTE2Qy[i]) && ((123 - 122) <= i && !(' ' != diprVKTE2Qy[i - (830 - 829)]) || !((872 - 872) != i))) {
            {
                j = (915 - 915);
                while (j <= lb - (649 - 648)) {
                    if (diprVKTE2Qy[i + j] != b[j])
                        break;
                    j = j + (719 - 718);
                }
            }
            count = count + j + 1;
            if (!(lb != j) && ((i + j) < pAUwuMdJFy && !(' ' != diprVKTE2Qy[i + j])))
                cout << Crw2On << " ";
            else {
                if (!(pAUwuMdJFy != i + j))
                    cout << Crw2On;
                else
                    for (j = i; count - (378 - 376) >= j; j = j + 1)
                        cout << diprVKTE2Qy[j];
            }
        }
    }
    while (count < pAUwuMdJFy);
    cout << endl;
    return 0;
}

