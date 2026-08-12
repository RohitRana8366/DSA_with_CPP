class Solution {
public:
    string predictPartyVictory(string senate) {

        queue<char> q;

        // String ko queue mein daalna
        for (char ch : senate) {
            q.push(ch);
        }

        while (true) {

            // Front senator
            char current = q.front();
            q.pop();

            queue<char> temp;
            bool banned = false;

            // Opposite senator ko dhundo
            while (!q.empty()) {

                char x = q.front();
                q.pop();

                if (!banned && x != current) {
                    // Opposite senator ko ban kar diya
                    banned = true;
                    continue;
                }

                temp.push(x);
            }

            // Agar opposite senator mila hi nahi
            if (!banned) {
                if (current == 'R')
                    return "Radiant";
                else
                    return "Dire";
            }

            // Current senator next round ke liye back mein
            temp.push(current);

            q = temp;
        }
    }
};