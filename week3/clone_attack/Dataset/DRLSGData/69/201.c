int main () {
    int l2impy;
    int flag;
    int mark2;
    char N7gvi2 [(1094 - 494)] = {'\0'};
    char nPkL7jebBZJ [(1494 - 894)] = {'\0'};
    int hzCWbgX;
    int K20eqy4Va9r;
    char aI1ELXQqZ [(1600 - 1000)] = {'\0'};
    l2impy = (616 - 616);
    nPkL7jebBZJ[(73 - 73)] = '0';
    cin.getline (N7gvi2, (1065 - 465), '\n');
    K20eqy4Va9r = strlen (N7gvi2);
    cin.getline (aI1ELXQqZ, 600, '\n');
    mark2 = strlen (aI1ELXQqZ);
    hzCWbgX = (478 - 478);
    flag = (968 - 968);
    if (strlen (N7gvi2) > strlen (aI1ELXQqZ)) {
        hzCWbgX = strlen (N7gvi2);
        {
            l2impy = N7gvi2;
            for (; K20eqy4Va9r -mark2 <= l2impy;) {
                aI1ELXQqZ[l2impy] = aI1ELXQqZ[l2impy - K20eqy4Va9r +mark2];
                l2impy--;
            }
        }
        {
            l2impy = K20eqy4Va9r -mark2 - (292 - 291);
            for (; (821 - 821) <= l2impy;) {
                aI1ELXQqZ[l2impy] = '*';
                l2impy--;
            }
        }
    }
    else {
        if (strlen (aI1ELXQqZ) > strlen (N7gvi2)) {
            hzCWbgX = strlen (aI1ELXQqZ);
            {
                l2impy = aI1ELXQqZ;
                for (; mark2 - K20eqy4Va9r <= l2impy;) {
                    N7gvi2[l2impy] = N7gvi2[l2impy - mark2 + K20eqy4Va9r];
                    l2impy--;
                }
            }
            for (l2impy = mark2 - K20eqy4Va9r -(558 - 557); l2impy >= (905 - 905); l2impy--)
                N7gvi2[l2impy] = '*';
        }
        else
            hzCWbgX = strlen (N7gvi2);
    }
    {
        l2impy = (301 - 301);
        for (; hzCWbgX > l2impy;) {
            if (!('*' != N7gvi2[l2impy]) || aI1ELXQqZ[l2impy] == '*')
                nPkL7jebBZJ[l2impy + (780 - 779)] = N7gvi2[l2impy] + aI1ELXQqZ[l2impy] - '*';
            else
                nPkL7jebBZJ[l2impy + (154 - 153)] = N7gvi2[l2impy] + aI1ELXQqZ[l2impy] - '0';
            l2impy++;
        }
    }
    {
        l2impy = hzCWbgX;
        for (; l2impy > 0;) {
            if (nPkL7jebBZJ[l2impy] > '9') {
                nPkL7jebBZJ[l2impy] = nPkL7jebBZJ[l2impy] - (982 - 972);
                nPkL7jebBZJ[l2impy - (826 - 825)]++;
            }
            l2impy--;
        }
    }
    {
        l2impy = 0;
        for (; l2impy <= hzCWbgX;) {
            if (nPkL7jebBZJ[l2impy] != '0') {
                flag = l2impy;
                break;
            }
            l2impy++;
        }
    }
    if (l2impy == hzCWbgX + 1)
        cout << '0';
    else {
        l2impy = flag;
        for (; l2impy <= hzCWbgX;) {
            cout << nPkL7jebBZJ[l2impy];
            l2impy++;
        }
    }
    return 0;
}

