int main () {
    char m [(1844 - 844)];
    int qrd7xQTj0e9;
    char Jo20L6pKT;
    int r;
    qrd7xQTj0e9 = 0;
    scanf ("%s", m);
    while (m[qrd7xQTj0e9] != '\0') {
        if ((m[qrd7xQTj0e9] >= 'a') && (m[qrd7xQTj0e9] <= 'z'))
            m[qrd7xQTj0e9] = m[qrd7xQTj0e9] - 32;
        qrd7xQTj0e9 = qrd7xQTj0e9 + 1;
    }
    qrd7xQTj0e9 = 0;
    for (; m[qrd7xQTj0e9] != '\0';) {
        r = 0;
        Jo20L6pKT = m[qrd7xQTj0e9];
        while (Jo20L6pKT == m[qrd7xQTj0e9]) {
            r++;
            qrd7xQTj0e9++;
        }
        printf ("(%c,%d)", Jo20L6pKT, r);
    }
    return 0;
}

