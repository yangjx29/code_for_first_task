int main () {
    char SmLUHgO6q [80];
    char hSYdijulWQaN [80];
    char JTlxOWt5C;
    gets (SmLUHgO6q);
    gets (hSYdijulWQaN);
    for (JTlxOWt5C = 0; (!('\0' == SmLUHgO6q[JTlxOWt5C])) || (!('\0' == hSYdijulWQaN[JTlxOWt5C])); JTlxOWt5C = JTlxOWt5C +1) {
        if (('A' <= SmLUHgO6q[JTlxOWt5C]) && ('Z' >= SmLUHgO6q[JTlxOWt5C]))
            SmLUHgO6q[JTlxOWt5C] = SmLUHgO6q[JTlxOWt5C] - 'A' + 'a';
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        if ((hSYdijulWQaN[JTlxOWt5C] >= 'A') && (hSYdijulWQaN[JTlxOWt5C] <= 'Z'))
            hSYdijulWQaN[JTlxOWt5C] = hSYdijulWQaN[JTlxOWt5C] - 'A' + 'a';
    }
    JTlxOWt5C = 0;
    for (; (SmLUHgO6q[JTlxOWt5C] == hSYdijulWQaN[JTlxOWt5C]) && (SmLUHgO6q[JTlxOWt5C] != '\0');)
        JTlxOWt5C = JTlxOWt5C +1;
    if ((SmLUHgO6q[JTlxOWt5C] == '\0') && (hSYdijulWQaN[JTlxOWt5C] == '\0'))
        ;
    else {
        if (SmLUHgO6q[JTlxOWt5C] > hSYdijulWQaN[JTlxOWt5C])
            ;
        else
            ;
    };
}

