# === Base Layer =======================================================================================================
FROM debian:stable
SHELL ["/bin/bash", "-c"]


# === Metadata =========================================================================================================
LABEL image_name="Project Verdant"
LABEL description="Development environment for CI/CD of the Project Verdant ROM."


# === APT Packages =====================================================================================================
# Ensure up-to-date apt info
RUN apt update \
    && apt upgrade -y

# Install packages needed for building
RUN apt install -y \
    git \
    make \
    build-essential \
    binutils-arm-none-eabi \
    libpng-dev \
    wget \
    unzip


# === Project Files ====================================================================================================
RUN git clone https://github.com/wheeler-cs/project-verdant


# === Tooling ==========================================================================================================
# agbcc
RUN git clone https://github.com/pret/agbcc
RUN cd agbcc \
    && ./build.sh \
    && ./install.sh ../project-verdant

# Poryscript
RUN cd ./project-verdant \
    && ./docker/Install-Poryscript.sh