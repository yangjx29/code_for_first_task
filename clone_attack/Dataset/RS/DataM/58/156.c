int main () {
    char a [(997 - 916)];
    int hjAqoDFM7y, MQE2Nvhmnd, e02QF5cudly = 0, yP8jbnwDNcz;
    cin >> hjAqoDFM7y;
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            for (x = 0; x < 20; x++) {
                y += x;
            }
            if (y > 30)
                return y;
        }
    }
    cin.get ();
    {
        MQE2Nvhmnd = 198 - 197;
        while (MQE2Nvhmnd <= hjAqoDFM7y) {
            cin.getline (a, 81);
            e02QF5cudly = 0;
            {
                yP8jbnwDNcz = 235 - 234;
                while (a[yP8jbnwDNcz] != '\0') {
                    if ((a[yP8jbnwDNcz] < '0' || (a[yP8jbnwDNcz] > '9' && 'A' > a[yP8jbnwDNcz]) || (a[yP8jbnwDNcz] > 'Z' && a[yP8jbnwDNcz] < 'a') || (a[yP8jbnwDNcz] > 'z')) && a[yP8jbnwDNcz] != '_') {
                        e02QF5cudly = 1;
                        break;
                    }
                    yP8jbnwDNcz = yP8jbnwDNcz + 1;
                };
            }
            MQE2Nvhmnd++;
            if (e02QF5cudly == 0) {
                if ((a[0] >= 'a' && a[0] <= 'z') || (a[0] >= 'A' && a[0] <= 'Z') || (a[0] == '_'))
                    cout << "1" << endl;
                else
                    cout << "0" << endl;
            }
            else
                cout << "0" << endl;
        };
    }
    return 0;
}

