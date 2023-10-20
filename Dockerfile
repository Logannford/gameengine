FROM gcc:11

# Copy the current folder which contains C++ source code to the Docker image under /usr/src
COPY . /usr/src/myapp

# Specify the working directory
WORKDIR /usr/src/myapp

# Use GCC to compile the main.cpp source file
RUN g++ -o myapp src/main.cpp

# Run the program output from the previous step
CMD ["./myapp"]
