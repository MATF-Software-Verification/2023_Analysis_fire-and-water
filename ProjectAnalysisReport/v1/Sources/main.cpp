                            #include "../Headers/level.h"
                            #include "../Headers/levelinfo.h"
                            #include "../Headers/settings.h"

                            int main(int argc, char *argv[])
                            {

                                int i = 0;
                                int levelId = 1;
                                while(i++ != 1000) {
                                    levelId = levelId % 3;
                                    if(!levelId)
                                        levelId++;

                                    Settings *s = new Settings();
                                    LevelInfo *li = new LevelInfo(s);
                                    Level *level = new Level(levelId, li);

                                    level->start();

                                    delete s; delete li; delete level;
                                }
                            }


