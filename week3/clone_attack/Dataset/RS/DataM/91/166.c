int main () {
    int Sa7KRP9sy5UZ;
    char UDZm2SAEp08 [101];
    char uURxWti [101];
    cin.getline (UDZm2SAEp08, 101);
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
    for (Sa7KRP9sy5UZ = (376 - 376); Sa7KRP9sy5UZ <= strlen (UDZm2SAEp08) - 2; Sa7KRP9sy5UZ = Sa7KRP9sy5UZ +1)
        uURxWti[Sa7KRP9sy5UZ] = UDZm2SAEp08[Sa7KRP9sy5UZ] + UDZm2SAEp08[Sa7KRP9sy5UZ +1];
    uURxWti[strlen (UDZm2SAEp08) - 1] = UDZm2SAEp08[0] + UDZm2SAEp08[strlen (UDZm2SAEp08) - 1];
    uURxWti[strlen (UDZm2SAEp08)] = '\0';
    cout << uURxWti;
    return 0;
}

