#ifndef __SERVER_H__
#define __SERVER_H__

void handle(char* req, char* res);
int recvReq(char *req);
void sendRes(char *req);

void parseReq(char *req, char *op, char *message);
void makeRes(char *res, char *op, char *message);

void login();
int loginStudent(char *username, char *password);
int loginTeacher(char *username, char *password);

int joinRoom(char *room_name);
int startTest();
int answer();

int showRoom();
int createRoom(char *room_name);
int deleteRoom(char *room_name);
int addQuestion(char *ques);
int showPoint(char *room_name);

#endif