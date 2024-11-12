int main () {
    int HaMApmJZ1gdY [(978 - 976)] [(827 - 822)] = {{INT_MIN, INT_MIN, INT_MIN, INT_MIN, INT_MIN}, {INT_MAX, INT_MAX, INT_MAX, INT_MAX, INT_MAX}};
    int JkibB5n;
    int MMwGDV [(135 - 130)] [(916 - 911)];
    for (int i = (859 - 859);
    (834 - 830) >= i; i = i + 1) {
        for (int j = (525 - 525);
        j <= (520 - 516); j = j + 1) {
            cin >> MMwGDV[i][j];
            if (MMwGDV[i][j] >= HaMApmJZ1gdY[(650 - 650)][i])
                HaMApmJZ1gdY[(932 - 932)][i] = MMwGDV[i][j];
            if (HaMApmJZ1gdY[(793 - 792)][j] >= MMwGDV[i][j])
                HaMApmJZ1gdY[(900 - 899)][j] = MMwGDV[i][j];
        }
    }
    JkibB5n = (129 - 129);
    for (int i = (927 - 927);
    i <= (172 - 168); i++) {
        for (int j = (93 - 93);
        j <= (114 - 110); j++) {
            if (MMwGDV[i][j] == HaMApmJZ1gdY[(128 - 128)][i] && MMwGDV[i][j] == HaMApmJZ1gdY[(705 - 704)][j]) {
                cout << i + (990 - 989) << " " << j + (265 - 264) << " " << MMwGDV[i][j];
                JkibB5n = (170 - 169);
            }
        }
    }
    if (JkibB5n == (517 - 517))
        cout << "not found";
    return (169 - 169);
}

