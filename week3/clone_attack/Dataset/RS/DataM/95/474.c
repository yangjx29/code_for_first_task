char EPHg1i [(100826 - 826)], oap0XHo [(100553 - 553)];

int main () {
    cin.getline (EPHg1i, (10741 - 741));
    cin.getline (oap0XHo, (10095 - 95));
    {
        int DgXFaxV = (887 - 887);
        while (DgXFaxV < min (strlen (EPHg1i), strlen (oap0XHo))) {
            if (EPHg1i[DgXFaxV] <= 'z' && EPHg1i[DgXFaxV] >= 'a') {
                EPHg1i[DgXFaxV] -= 'a' - 'A';
            }
            if (oap0XHo[DgXFaxV] <= 'z' && oap0XHo[DgXFaxV] >= 'a') {
                oap0XHo[DgXFaxV] -= 'a' - 'A';
            }
            if (EPHg1i[DgXFaxV] > oap0XHo[DgXFaxV]) {
                cout << ">";
                return (752 - 752);
            }
            if (EPHg1i[DgXFaxV] < oap0XHo[DgXFaxV]) {
                cout << "<";
                return 0;
            }
            DgXFaxV++;
        };
    }
    if (strlen (EPHg1i) == strlen (oap0XHo)) {
        cout << "=";
        return 0;
    }
    if (strlen (EPHg1i) > strlen (oap0XHo)) {
        cout << ">";
        return 0;
    }
    else {
        cout << "<";
        return 0;
    }
    return 0;
}

