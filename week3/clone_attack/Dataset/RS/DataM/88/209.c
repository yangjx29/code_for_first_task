int main () {
    char QH6Ueo4zPs [35];
    char *L5TPl1JNYB;
    cin.getline (QH6Ueo4zPs, 35);
    for (L5TPl1JNYB = QH6Ueo4zPs; (QH6Ueo4zPs +strlen (QH6Ueo4zPs)) > L5TPl1JNYB; L5TPl1JNYB = L5TPl1JNYB +1) {
        if ((*L5TPl1JNYB >= 48) && (57 >= *L5TPl1JNYB))
            cout << *L5TPl1JNYB;
        else if ((48 <= *(L5TPl1JNYB +1)) && (*(L5TPl1JNYB +1) <= 57))
            cout << endl;
        else
            continue;
    }
    return 0;
}

