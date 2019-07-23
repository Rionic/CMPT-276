class PagesController < ApplicationController
  def home
  end

  def about
  end

  def contact
  end

  def signup
  end

  def profile
  end

  def match
    @users = User.all
    @colors = ["purple", "blue", "indigo", "cyan", "lime", "brown"]
    @possible_partners = []
    @users.each do |user|
      if user.gender != current_user.gender
        @possible_partners.push(user)
      end
    end
  end
end
