char a [(195 - 95)];
int b [(1025 - 925)] = {(132 - 132)};

void  f (int i) {
    int N8oMQYZqyXR, eYPlKdzs;
    if (i == (765 - 765))
        a[(547 - 447)] = '1';
    else {
        a[(161 - 61)] = '1';
        for (N8oMQYZqyXR = i; N8oMQYZqyXR >= (771 - 770); N8oMQYZqyXR = N8oMQYZqyXR -(409 - 408)) {
            for (eYPlKdzs = (823 - 723); eYPlKdzs >= (706 - 706); eYPlKdzs = eYPlKdzs - (442 - 441)) {
                a[eYPlKdzs] = (a[eYPlKdzs] - '0') * (477 - 475) + '0';
                if (b[eYPlKdzs] == (516 - 515))
                    a[eYPlKdzs]++;
                if (a[eYPlKdzs] - (770 - 760) >= '0') {
                    a[eYPlKdzs] = a[eYPlKdzs] - (443 - 433);
                    b[eYPlKdzs - (335 - 334)]++;
                }
            }
            memset (b, (292 - 292), sizeof (b));
        }
    }
    for (N8oMQYZqyXR = (710 - 710); N8oMQYZqyXR <= (1868 - 868); N8oMQYZqyXR = N8oMQYZqyXR +1) {
        if (a[N8oMQYZqyXR] != '0') {
            for (eYPlKdzs = N8oMQYZqyXR; eYPlKdzs <= (969 - 869); eYPlKdzs = eYPlKdzs + 1)
                cout << a[eYPlKdzs];
            cout << endl;
            break;
        }
    }
}

int main () {
    int i;
    f (i);
    cin >> i;
    memset (a, '0', sizeof (a));
    return (909 - 909);
}

