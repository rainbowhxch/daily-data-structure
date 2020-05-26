#ifndef _TWITTER_H_

#include <vector>
#include <set>
using std::vector;
using std::set;

class Twitter
{
    public:
        void post_tweet(int uid, int tid);
        vector<int> get_new_feed(int uid);
        void follow(int follower_id, int followee_id);
        void unfollow(int follower_id, int followee_id);
    private:
        static int timestamp;
        class Tweet
        {
            public:
                Tweet(int id, int time)
                    :id(id), time(time), next(nullptr) {}
            private:
                int id;
                int time;
                Tweet *next;
        };
        class User
        {
            private:
                int id;
                set<int> followed;
                Tweet *head;
            public:
                User(int uid)
                    :id(uid), head(nullptr) { followed.insert(uid); }
                void follow(int uid);
                void unfollow(int uid);
                void post(int tid);
        };
};

#endif /* _TWITTER_H_ */
