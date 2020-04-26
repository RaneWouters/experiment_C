CC = g++
#CFLAGS =
OBJS = 6_4.o Set.o
TARGET = 6_4
RM = rm

$(TARGET): $(OBJS)
	$(CC) $^ -o $@
%.o: %.cpp
	$(CC) -c $<
clean:
	$(RM) $(TARGET) $(OBJS)
