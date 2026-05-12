# -----------------------------
# DOCKER + GIT COMPLETE COMMANDS
# -----------------------------

# Update packages
sudo apt update

# Install required packages
sudo apt install apt-transport-https ca-certificates curl software-properties-common -y

# Install Docker
sudo apt install docker.io -y

# Start Docker service
sudo systemctl start docker

# Enable Docker on boot
sudo systemctl enable docker

# Check Docker version
docker --version

# Test Docker installation
sudo docker run hello-world
-----------------------------------------------------------------------------
# Move into project folder
cd my-python-app

# Create/Edit app.py
gedit app.py

# Create/Edit Dockerfile
gedit Dockerfile

# Create/Edit requirements.txt
gedit requirements.txt

# Check files
ls

# Start Docker again (optional)
sudo systemctl start docker

# Build Docker image
docker build -t image-lab4 .

# Show Docker images
docker images

# Show running containers
docker ps

# Run Docker container
docker run -d -p 5000:5000 --name container-4 image-lab4

# Initialize Git repository
git init

# Add all files
git add .

# Commit files
git commit -m "Initial commit"

# Add remote GitHub repository
git remote add origin <YOUR_GITHUB_URL>

# Rename branch to main
git branch -M main

# Push code to GitHub
git push -u origin main

# Show all containers
docker ps -a

# Stop container
docker stop container-4

# Remove container
docker rm container-4
